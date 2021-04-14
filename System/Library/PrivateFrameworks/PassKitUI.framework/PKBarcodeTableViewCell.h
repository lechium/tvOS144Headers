/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class PKBarcodeStickerView, PKPass;

@interface PKBarcodeTableViewCell : UITableViewCell {

	PKBarcodeStickerView* _barcodeStickerView;
	CGSize _maximumBarcodeSize;
	PKPass* _pass;
	long long _barcodeStyle;

}

@property (nonatomic,retain) PKPass * pass;                       //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) long long barcodeStyle;              //@synthesize barcodeStyle=_barcodeStyle - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPass *)pass;
-(void)layoutSubviews;
-(void)setPass:(PKPass *)arg1 ;
-(void)_computeMaxBarcodeSize;
-(void)setBarcodeStyle:(long long)arg1 ;
-(long long)barcodeStyle;
@end
