/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BUCellularSettings : NSObject {

	NSString* _defaultsKey;

}

@property (assign,nonatomic) BOOL allowAutomaticDownloads; 
@property (nonatomic,readonly) BOOL legacyAllowAutomaticDownloads; 
@property (assign,nonatomic) long long cellularDataPrompt; 
+(BOOL)shouldShowCellularAutomaticDownloadsSwitch;
+(id)settingsForIdentity:(id)arg1 ;
+(id)_copyValueForCarrierBundleKey:(id)arg1 ;
-(id)initWithDefaultsKey:(id)arg1 ;
-(id)_cellularSettings;
-(BOOL)allowAutomaticDownloads;
-(void)setAllowAutomaticDownloads:(BOOL)arg1 ;
-(long long)cellularDataPrompt;
-(void)setCellularDataPrompt:(long long)arg1 ;
-(BOOL)legacyAllowAutomaticDownloads;
@end
