/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ActionKit/ActionKit-Structs.h>
@class NSData;

@interface WPXMLRPCDataCleaner : NSObject {

	NSData* xmlData;

}
-(id)initWithData:(id)arg1 ;
-(id)cleanData;
-(id)cleanClosingTagIfNeeded:(id)arg1 lengthOfCharactersPrecedingPreamble:(long long)arg2 ;
-(id)cleanWithTidyIfPresent:(id)arg1 ;
-(id)cleanInvalidXMLCharacters:(id)arg1 ;
-(id)cleanCharactersBeforePreamble:(id)arg1 ;
-(id)cleanInvalidUTF8:(id)arg1 ;
-(id)cloingTagsForString:(id)arg1 ;
-(id)repairTruncatedClosingTags:(id)arg1 inResponseString:(id)arg2 ;
-(id)appendClosingTags:(id)arg1 toResponseString:(id)arg2 ;
-(NSRange)rangeOfLastValidClosingTagInString:(id)arg1 ;
@end

