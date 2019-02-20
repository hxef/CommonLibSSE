#pragma once

#include "RE/BSFixedString.h"  // BSFixedString
#include "RE/TESForm.h"  // TESForm


namespace RE
{
	class BGSKeyword : public TESForm
	{
	public:
		enum { kTypeID = FormType::Keyword };


		struct LocalFlags
		{
			enum LocalFlag : UInt32
			{
				kDeleted = 1 << 5,
				kIgnored = 1 << 12
			};
		};


		virtual ~BGSKeyword();											// 00

		// override (TESForm)
		virtual bool		LoadForm(TESFile* a_mod) override;			// 06
		virtual const char*	GetEditorID() override;						// 32 - { return keyword.c_str(); }
		virtual bool		SetEditorID(const char* a_str) override;	// 33


		// members
		BSFixedString keyword;	// 20
	};
	STATIC_ASSERT(sizeof(BGSKeyword) == 0x28);
}
