#include <stdio.h>
#include <uf_curve.h>
#include <uf.h>
#include <uf_csys.h>

void ufusr(char* param, int* retcode, int paramLen)
{
	tag_t entid = 0; //Тэг линии
	tag_t arc_id, wcs_tag; //Тэг окружности

	UF_CURVE_line_t line_coords1; //Координаты линии
	UF_CURVE_line_t line_coords2;
	UF_CURVE_line_t line_coords3;
	UF_CURVE_line_t line_coords4;
	UF_CURVE_line_t line_coords5;
	UF_CURVE_line_t line_coords6;
	UF_CURVE_line_t line_coords7;
	UF_CURVE_line_t line_coords8;
	UF_CURVE_line_t line_coords9;
	UF_CURVE_line_t line_coords10;
	UF_CURVE_line_t line_coords11;
	UF_CURVE_line_t line_coords12;
	UF_CURVE_line_t line_coords13;
	UF_CURVE_line_t line_coords14;
	UF_CURVE_line_t line_coords15;
	UF_CURVE_line_t line_coords16;
	UF_CURVE_line_t line_coords17;
	UF_CURVE_arc_t arc_coords; //Координаты окружности

	if (UF_initialize()) return;

	//Заполнение координат концевых точек линии
	line_coords1.start_point[0] = -50.; //X1
	line_coords1.start_point[1] = -20.; //Y1
	line_coords1.start_point[2] = 0.; //Z1
	line_coords1.end_point[0] = -50.; //X2
	line_coords1.end_point[1] = 20.; //Y2
	line_coords1.end_point[2] = 0.; //Z2

	line_coords2.start_point[0] = -50.;
	line_coords2.start_point[1] = 20.;
	line_coords2.start_point[2] = 0.;
	line_coords2.end_point[0] = 50.;
	line_coords2.end_point[1] = 20.;
	line_coords2.end_point[2] = 0.;

	line_coords3.start_point[0] = 50.;
	line_coords3.start_point[1] = 20.;
	line_coords3.start_point[2] = 0.;
	line_coords3.end_point[0] = 50.;
	line_coords3.end_point[1] = 7.5;
	line_coords3.end_point[2] = 0.;

	line_coords4.start_point[0] = 50.;
	line_coords4.start_point[1] = 7.5;
	line_coords4.start_point[2] = 0.;
	line_coords4.end_point[0] = 35.;
	line_coords4.end_point[1] = 7.5;
	line_coords4.end_point[2] = 0.;

	line_coords5.start_point[0] = 35.;
	line_coords5.start_point[1] = 7.5;
	line_coords5.start_point[2] = 0.;
	line_coords5.end_point[0] = 35.;
	line_coords5.end_point[1] = -7.5;
	line_coords5.end_point[2] = 0.;

	line_coords6.start_point[0] = 35.;
	line_coords6.start_point[1] = -7.5;
	line_coords6.start_point[2] = 0.;
	line_coords6.end_point[0] = 50.;
	line_coords6.end_point[1] = -7.5;
	line_coords6.end_point[2] = 0.;

	line_coords7.start_point[0] = 50.;
	line_coords7.start_point[1] = -7.5;
	line_coords7.start_point[2] = 0.;
	line_coords7.end_point[0] = 50.;
	line_coords7.end_point[1] = -20.;
	line_coords7.end_point[2] = 0.;

	line_coords8.start_point[0] = 50.;
	line_coords8.start_point[1] = -20.;
	line_coords8.start_point[2] = 0.;
	line_coords8.end_point[0] = -50.;
	line_coords8.end_point[1] = -20.;
	line_coords8.end_point[2] = 0.;

	line_coords9.start_point[0] = -33.;
	line_coords9.start_point[1] = 6.;
	line_coords9.start_point[2] = 0.;
	line_coords9.end_point[0] = -33.;
	line_coords9.end_point[1] = -6.;
	line_coords9.end_point[2] = 0.;

	line_coords10.start_point[0] = -33.;
	line_coords10.start_point[1] = -6.;
	line_coords10.start_point[2] = 0.;
	line_coords10.end_point[0] = -45.;
	line_coords10.end_point[1] = -6.;
	line_coords10.end_point[2] = 0.;

	line_coords11.start_point[0] = -45.;
	line_coords11.start_point[1] = -6.;
	line_coords11.start_point[2] = 0.;
	line_coords11.end_point[0] = -45.;
	line_coords11.end_point[1] = 6.;
	line_coords11.end_point[2] = 0.;

	line_coords12.start_point[0] = -45.;
	line_coords12.start_point[1] = 6.;
	line_coords12.start_point[2] = 0.;
	line_coords12.end_point[0] = -33.;
	line_coords12.end_point[1] = 6.;
	line_coords12.end_point[2] = 0.;

	line_coords13.start_point[0] = -28.;
	line_coords13.start_point[1] = 20.;
	line_coords13.start_point[2] = 0.;
	line_coords13.end_point[0] = -28.;
	line_coords13.end_point[1] = -20.;
	line_coords13.end_point[2] = 0.;

	line_coords14.start_point[0] = -14.;
	line_coords14.start_point[1] = -14.;
	line_coords14.start_point[2] = 0.;
	line_coords14.end_point[0] = -14.;
	line_coords14.end_point[1] = 14.;
	line_coords14.end_point[2] = 0.;

	line_coords15.start_point[0] = -14.;
	line_coords15.start_point[1] = 14.;
	line_coords15.start_point[2] = 0.;
	line_coords15.end_point[0] = 14.;
	line_coords15.end_point[1] = 14.;
	line_coords15.end_point[2] = 0.;

	line_coords16.start_point[0] = 14.;
	line_coords16.start_point[1] = 14.;
	line_coords16.start_point[2] = 0.;
	line_coords16.end_point[0] = 14.;
	line_coords16.end_point[1] = -14.;
	line_coords16.end_point[2] = 0.;

	line_coords17.start_point[0] = 14.;
	line_coords17.start_point[1] = -14.;
	line_coords17.start_point[2] = 0.;
	line_coords17.end_point[0] = -14.;
	line_coords17.end_point[1] = -14.;
	line_coords17.end_point[2] = 0.;

	arc_coords.start_angle = 0.0; //Начальный угол окружности
	arc_coords.end_angle = 360.0 * DEGRA; //Конечный угол
	arc_coords.arc_center[0] = 0.0; //Х
	arc_coords.arc_center[1] = 0.0; //Y
	arc_coords.arc_center[2] = 0.0; //Z
	arc_coords.radius = 10.0; //Радиус окружности
	UF_CSYS_ask_wcs(&wcs_tag); //Получение абсолютных координат
	//Перенос абсолютных координат на создаваемую окружность
	UF_CSYS_ask_matrix_of_object(wcs_tag, &arc_coords.matrix_tag);


	//Построение объектов
	UF_CURVE_create_line(&line_coords1, &entid);
	UF_CURVE_create_line(&line_coords2, &entid);
	UF_CURVE_create_line(&line_coords3, &entid);
	UF_CURVE_create_line(&line_coords4, &entid);
	UF_CURVE_create_line(&line_coords5, &entid);
	UF_CURVE_create_line(&line_coords6, &entid);
	UF_CURVE_create_line(&line_coords7, &entid);
	UF_CURVE_create_line(&line_coords8, &entid);
	UF_CURVE_create_line(&line_coords9, &entid);
	UF_CURVE_create_line(&line_coords10, &entid);
	UF_CURVE_create_line(&line_coords11, &entid);
	UF_CURVE_create_line(&line_coords12, &entid);
	UF_CURVE_create_line(&line_coords13, &entid);
	UF_CURVE_create_line(&line_coords14, &entid);
	UF_CURVE_create_line(&line_coords15, &entid);
	UF_CURVE_create_line(&line_coords16, &entid);
	UF_CURVE_create_line(&line_coords17, &entid);
	UF_CURVE_create_arc(&arc_coords, &arc_id);

	UF_terminate();
}

int ufusr_ask_unload(void)
{
	return (UF_UNLOAD_IMMEDIATELY);
}