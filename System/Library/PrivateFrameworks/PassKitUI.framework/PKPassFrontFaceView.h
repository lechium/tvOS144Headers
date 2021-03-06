/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPassFaceView.h>

@class UILabel, PKBarcodeStickerView, UIView, PKLinkedAppIconView;

@interface PKPassFrontFaceView : PKPassFaceView {

	UILabel* _logoLabel;
	PKBarcodeStickerView* _barcodeView;
	UIView* _bottomRightItemView;
	BOOL _showsLinkedApp;
	BOOL _showsBarcodeView;
	BOOL _showsLiveBalance;
	long long _bottomRightItem;
	PKLinkedAppIconView* _linkedApp;

}

@property (nonatomic,readonly) PKBarcodeStickerView * barcodeView; 
@property (assign,nonatomic) BOOL showsLinkedApp;                               //@synthesize showsLinkedApp=_showsLinkedApp - In the implementation block
@property (assign,nonatomic) long long bottomRightItem;                         //@synthesize bottomRightItem=_bottomRightItem - In the implementation block
@property (assign,nonatomic) BOOL showsBarcodeView;                             //@synthesize showsBarcodeView=_showsBarcodeView - In the implementation block
@property (assign,nonatomic) BOOL showsLiveBalance;                             //@synthesize showsLiveBalance=_showsLiveBalance - In the implementation block
@property (nonatomic,readonly) PKLinkedAppIconView * linkedApp;                 //@synthesize linkedApp=_linkedApp - In the implementation block
-(id)init;
-(void)dealloc;
-(CGSize)contentSize;
-(void)layoutSubviews;
-(void)createBodyContentViews;
-(void)insertContentView:(id)arg1 ofType:(long long)arg2 ;
-(BOOL)showsBarcodeView;
-(void)setShowsBarcodeView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)barcodeFrame;
-(id)templateForLayoutMode:(long long)arg1 ;
-(id)headerTemplate;
-(void)createHeaderContentViews;
-(id)passFaceTemplate;
-(id)_relevantBuckets;
-(id)createContactlessLogoView;
-(id)createExpiredLabel;
-(id)templateForHeaderBucket;
-(PKBarcodeStickerView *)barcodeView;
-(void)_positionBarcodeView;
-(id)_rebucketAuxiliaryFields:(id)arg1 ;
-(void)setShowsLinkedApp:(BOOL)arg1 ;
-(void)setBottomRightItem:(long long)arg1 ;
-(void)setShowsBarcodeView:(BOOL)arg1 ;
-(void)setShowsLiveBalance:(BOOL)arg1 ;
-(void)updateValidity;
-(BOOL)showsLinkedApp;
-(long long)bottomRightItem;
-(BOOL)showsLiveBalance;
-(PKLinkedAppIconView *)linkedApp;
@end

