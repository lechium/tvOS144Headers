/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextInput_ja/TextInput_ja-Structs.h>
@class NSCharacterSet;

@interface Romakana : NSObject {

	NSCharacterSet* _consonantsCharacterSet;

}
+(id)hiraganaString:(id)arg1 mappingArray:(id)arg2 ;
+(id)romajiString:(id)arg1 ;
+(id)kanaSymbol:(id)arg1 ;
+(SCD_Struct_Ro0)splitRomaji:(id)arg1 at:(unsigned long long)arg2 ;
-(id)hiraganaFromRomaji:(id)arg1 stripIncompleteRomajiAtEnd:(BOOL)arg2 strippedLength:(unsigned long long*)arg3 ;
-(id)adjustIncompleteRomaji:(id)arg1 ;
@end

