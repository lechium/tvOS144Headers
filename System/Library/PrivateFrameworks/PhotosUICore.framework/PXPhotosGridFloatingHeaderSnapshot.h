/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXPhotosGridFloatingHeaderInfo.h>

@class NSAttributedString, PXAssetCollectionReference, NSString;

@interface PXPhotosGridFloatingHeaderSnapshot : NSObject <PXPhotosGridFloatingHeaderInfo> {

	NSAttributedString* _title;
	NSAttributedString* _subtitle;
	PXAssetCollectionReference* _assetCollectionReference;

}

@property (nonatomic,readonly) NSAttributedString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSAttributedString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
@property (nonatomic,readonly) NSAttributedString * floatingSummaryTitle; 
@property (nonatomic,readonly) NSAttributedString * floatingSummarySubtitle; 
@property (nonatomic,readonly) BOOL floatingEnableOverview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)title;
-(NSAttributedString *)subtitle;
-(PXAssetCollectionReference *)assetCollectionReference;
-(NSAttributedString *)floatingSummaryTitle;
-(NSAttributedString *)floatingSummarySubtitle;
-(BOOL)floatingEnableOverview;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetCollectionReference:(id)arg3 ;
@end

