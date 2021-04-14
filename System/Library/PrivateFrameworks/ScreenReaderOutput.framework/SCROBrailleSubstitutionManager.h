/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSLinguisticTagger;

@interface SCROBrailleSubstitutionManager : NSObject {

	NSMutableDictionary* _lookup;
	NSLinguisticTagger* _lingusticTagger;

}
+(id)sharedInstance;
+(id)_bundleForStrings;
-(id)init;
-(id)brailleSubstitutionForType:(long long)arg1 withLanguage:(id)arg2 ;
-(void)_loadLanguageSubstitutions:(id)arg1 intoDictionary:(id)arg2 ;
-(void)_ensureLanguageDataPresent:(id)arg1 ;
-(id)stringWithBrailleSubstitutions:(id)arg1 withLanguage:(id)arg2 ;
@end

