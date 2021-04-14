/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKPassView, PKPass;

@interface PKPassFooterViewConfiguration : NSObject {

	PKPassView* _passView;
	long long _state;

}

@property (nonatomic,readonly) PKPassView * passView;              //@synthesize passView=_passView - In the implementation block
@property (nonatomic,readonly) long long state;                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) PKPass * pass; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(long long)state;
-(PKPass *)pass;
-(PKPassView *)passView;
-(id)initWithPassView:(id)arg1 state:(long long)arg2 ;
@end

