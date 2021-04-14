/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EMFStringUtilities : NSObject
+(id)_stringWithUnichar:(unsigned)arg1 ;
+(id)_preferenceIndexString:(id)arg1 ;
+(id)_baseStringForEmojiString:(id)arg1 ;
+(BOOL)_isNewlyAddedEmoji:(id)arg1 ;
+(BOOL)_genderEmojiBaseStringNeedVariantSelector:(id)arg1 ;
+(BOOL)_hasSkinToneVariantsForString:(id)arg1 ;
+(int)_skinToneForString:(id)arg1 ;
+(id)_skinToneSpecifiersForString:(id)arg1 ;
+(id)_skinToneChooserVariantsForString:(id)arg1 ;
+(id)_skinToneVariantsForString:(id)arg1 ;
+(int)_skinToneModifierFromSpecifierType:(id)arg1 ;
+(id)_multiPersonStringForString:(id)arg1 skinToneVariantSpecifier:(id)arg2 ;
+(unsigned)_firstLongCharacterOfString:(id)arg1 ;
+(BOOL)_emojiString:(id)arg1 containsSubstring:(id)arg2 ;
+(long long)multiPersonTypeForString:(id)arg1 ;
+(id)professionSkinToneEmojiBaseKey:(id)arg1 ;
+(id)_baseFirstCharacterString:(id)arg1 ;
+(id)skinToneSpecifierTypeFromEmojiFitzpatrickModifier:(int)arg1 ;
+(id)_tokenizedMultiPersonFromString:(id)arg1 ;
+(id)_skinToneChooserVariantsForMultiPersonType:(long long)arg1 ;
+(id)_skinToneVariantsForMultiPersonType:(long long)arg1 ;
+(id)_skinToneSuffixFromSpecifierType:(id)arg1 ;
@end

