/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXTilingSettings : PXSettings {

	BOOL _flipLayoutsHorizontally;

}

@property (assign,nonatomic) BOOL flipLayoutsHorizontally;              //@synthesize flipLayoutsHorizontally=_flipLayoutsHorizontally - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)flipLayoutsHorizontally;
-(void)setFlipLayoutsHorizontally:(BOOL)arg1 ;
@end

