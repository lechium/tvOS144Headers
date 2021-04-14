/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VoiceServices/VoiceServices-Structs.h>
@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject {

	NSArray* _rules;
	NSString* _languageID;
	CFStringTokenizerRef _tokenizer;

}
-(void)dealloc;
-(id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2 ;
-(id)processedTextFromString:(id)arg1 ;
@end

