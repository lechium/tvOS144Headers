/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BRLTTranslatorProtocol;
@class NSBundle;

@interface BRLTSTranslator : NSObject {

	id<BRLTTranslatorProtocol> _translator;
	NSBundle* _bundle;

}

@property (nonatomic,readonly) id<BRLTTranslatorProtocol> translator;              //@synthesize translator=_translator - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle;                                  //@synthesize bundle=_bundle - In the implementation block
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(id<BRLTTranslatorProtocol>)translator;
-(id)brailleForText:(id)arg1 parameters:(id)arg2 locations:(out id*)arg3 ;
-(id)textForBraille:(id)arg1 parameters:(id)arg2 locations:(out id*)arg3 ;
@end

