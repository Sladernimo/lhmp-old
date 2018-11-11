/*
	Copyright 2017 D�vid Svitana

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

#ifndef _CVEHICLE_H_
#define _CVEHICLE_H_

namespace MafiaSDK
{
	struct C_Vehicle_Interface
	{

	};

	namespace C_Vehicle_Enum
	{
		enum FunctionsAddresses
		{

		};
	};
	
	class C_Vehicle
	{
	public:
		C_Vehicle_Interface* GetInterface()
		{
			return reinterpret_cast<C_Vehicle_Interface*>(this);
		}
	};
};

#endif