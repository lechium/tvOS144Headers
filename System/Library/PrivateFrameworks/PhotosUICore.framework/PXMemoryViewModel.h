/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableMemoryViewModel.h>

@protocol PXDisplayAsset;
@class NSString;

@interface PXMemoryViewModel : PXObservable <PXMutableMemoryViewModel> {

	BOOL _isHighlighted;
	NSString* _localizedDateText;
	NSString* _localizedTitle;
	id<PXDisplayAsset> _keyAsset;
	long long _specSet;
	long long _variant;
	UIEdgeInsets _layoutMargins;

}

@property (nonatomic,readonly) NSString * localizedDateText;              //@synthesize localizedDateText=_localizedDateText - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                 //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> keyAsset;               //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) BOOL isHighlighted;                        //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (nonatomic,readonly) long long specSet;                         //@synthesize specSet=_specSet - In the implementation block
@property (nonatomic,readonly) long long variant;                         //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets layoutMargins;                //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)variant;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setVariant:(long long)arg1 ;
-(void)setKeyAsset:(id<PXDisplayAsset>)arg1 ;
-(BOOL)isHighlighted;
-(id<PXDisplayAsset>)keyAsset;
-(UIEdgeInsets)layoutMargins;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(NSString *)localizedDateText;
-(void)setLocalizedDateText:(NSString *)arg1 ;
-(void)setIsHighlighted:(BOOL)arg1 ;
-(long long)specSet;
-(void)setSpecSet:(long long)arg1 ;
@end

