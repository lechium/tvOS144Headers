/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSSet;

@interface _CRKBundleManager : NSObject {

	NSMutableSet* _bundles;

}

@property (nonatomic,readonly) NSSet * bundles; 
+(id)sharedInstance;
+(id)bundleDirectoryPath;
+(Class)bundleClass;
-(id)init;
-(void)loadBundles;
-(void)registerBundle:(id)arg1 ;
-(NSSet *)bundles;
@end

