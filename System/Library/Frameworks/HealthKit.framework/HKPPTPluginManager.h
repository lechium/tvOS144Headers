/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface HKPPTPluginManager : NSObject {

	NSMutableDictionary* _testClasses;
	NSMutableDictionary* _builtinTests;

}
+(id)sharedPluginManager;
-(id)init;
-(void)_loadPPTBundles;
-(void)registerDriverClass:(Class)arg1 ;
-(id)builtinTests;
-(Class)classForTestType:(id)arg1 ;
@end

