/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface OBCapabilities : NSObject {

	BOOL _preventURLDataDetection;
	BOOL _preventOpeningSafari;

}

@property (assign,nonatomic) BOOL preventURLDataDetection;              //@synthesize preventURLDataDetection=_preventURLDataDetection - In the implementation block
@property (assign,nonatomic) BOOL preventOpeningSafari;                 //@synthesize preventOpeningSafari=_preventOpeningSafari - In the implementation block
+(id)sharedCapabilities;
-(BOOL)isWAPI;
-(BOOL)preventURLDataDetection;
-(void)setPreventURLDataDetection:(BOOL)arg1 ;
-(BOOL)preventOpeningSafari;
-(void)setPreventOpeningSafari:(BOOL)arg1 ;
@end

