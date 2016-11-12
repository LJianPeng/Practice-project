/*=========================================================================\
* Copyright(C)2016 Chudai.
*
* File name    : server_socket.h
* Version      : v1.0.0
* Author       : i.sshe
* Github       : github.com/isshe
* Date         : 2016/08/11
* Description  :
* Function list: 1.
*                2.
*                3.
* History      :
\*=========================================================================*/

#ifndef
#define

#ifdef __cplusplus
extern "C"{
#endif

/*=========================================================================*\
 * #include#                                                               *
\*=========================================================================*/

/*=========================================================================*\
 * #define#                                                                *
\*=========================================================================*/

/*=========================================================================*\
 * #enum#                                                                  *
\*=========================================================================*/

/*=========================================================================*\
 * #struct#                                                                *
\*=========================================================================*/

/*=========================================================================*\
 * #function#                                                              *
\*=========================================================================*/


/*=====================================================================\
* Function   (名称): server_socket()
* Description(功能): 和java的ServerSocket类似，把socket/bind/listen等封装。
* Called By  (被调): 1.
* Call_B file(被文): 1.
* Calls list (调用): 1.
* Calls file (调文): 1.
* Input      (输入): 1.
* Output     (输出): 1.
* Return     (返回):
*         success  : sockfd
*         failure  :
* Change log (修改): 1.
* Others     (其他): 1.
\*=====================================================================*/
int server_socket(u_short port);

#ifdef __cplusplus
}
#endif

#endif

