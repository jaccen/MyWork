#pragma once

namespace DreamEngine
{

enum Error
{
	ERROR_OK							= 0,
	ERROR_UNKONW						= 1,

	ERROR_CREATE_D3D_FAILD				= 2,
	ERROR_CREATE_DEVICE_FAILD			= 3,

	ERROR_CREATE_CREATE_BUFFER_FAILED	= 10,
	ERROR_LOCK_BUFFER_FAILED			= 11,
	ERROR_DEVICE_TEST_OK				= 12,
	ERROR_DEVICE_TEST_CAN_NOT_REST		= 13,
	ERROR_DEVICE_TEST_LOST				= 14,

	ERROR_CANNOT_FIND_TEXTURE_FILE		= 20,
	ERROR_CREATE_TEXTURE_FAILD			= 21,

	ERROR_COMPILE_SHADER_ERROR		    = 50,
	ERROR_CREATE_FRAGMENT_SHADER_FAILD  = 51,    
	ERROR_CREATE_VERTEX_SHADER_FAILD    = 52,   
	ERROR_LINK_SHADER_ERROR				= 53, 

	ERROR_HAVE_NULL_POINT				= 100,
	ERROR_MEMORY_ADDRESS_OUT_RANGE		= 101,

	ERROR_INPUT_COOPERATE_LEVL_FAILD	= 200,
	ERROR_CREATE_KEYBOARD_FAILD			= 201,
	ERROR_CREATE_MOUSE_FAILD			= 202,
};

#define CheckEngineError(error)		if (error != ERROR_OK)	{return error;}
#define IsEngineErrorOk(error)      error==ERROR_OK?true:false
#define CheckIsNullPoint(point)		if (point == MATH_NULL)	{return ERROR_HAVE_NULL_POINT;}

}
