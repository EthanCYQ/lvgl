#include <lvgl.h>

uint32_t prof_lv_bezier3(uint32_t t, uint32_t u0, uint32_t u1, uint32_t u2, uint32_t u3)
{
	return lv_bezier3(t, u0, u1, u2, u3);
}

bool prof_lv_area_intersect(lv_area_t *res_p, lv_area_t *a1_p, lv_area_t *a2_p)
{
	return _lv_area_intersect(res_p, a1_p, a2_p);
}