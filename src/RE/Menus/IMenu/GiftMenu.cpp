#include "RE/Menus/IMenu/GiftMenu.h"

namespace RE
{
	RefHandle GiftMenu::GetTargetRefHandle()
	{
		REL::Relocation<RefHandle*> handle{ REL::ID(519570) };
		return *handle;
	}
}
