/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <PineBoardServices/PBSAppInfoConfiguration.h>

@class NSArray, NSString;

@interface PBSMutableAppInfoConfiguration : PBSAppInfoConfiguration

@property (assign,nonatomic) unsigned long long configurationMode; 
@property (nonatomic,copy) NSArray * provisionedAppBundleIdentifiers; 
@property (nonatomic,copy) NSArray * managedHomeScreenLayout; 
@property (nonatomic,copy) NSString * kioskAppBundleIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_initWithSettings:(id)arg1 ;
-(void)setKioskAppBundleIdentifier:(NSString *)arg1 ;
-(void)setConfigurationMode:(unsigned long long)arg1 ;
-(void)setProvisionedAppBundleIdentifiers:(NSArray *)arg1 ;
-(void)setManagedHomeScreenLayout:(NSArray *)arg1 ;
@end
