/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VisualPairing.framework/VisualPairing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@interface VPScannerView : UIView {

	/*^block*/id _scannedCodeHandler;

}

@property (nonatomic,copy) id scannedCodeHandler;              //@synthesize scannedCodeHandler=_scannedCodeHandler - In the implementation block
-(void)start;
-(void)stop;
-(id)scannedCodeHandler;
-(void)setScannedCodeHandler:(id)arg1 ;
@end

