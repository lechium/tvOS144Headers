/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DKExtensionHostAdapter <NSObject>
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate; 
@required
-(id<DKExtensionHostAdapterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancelWithCompletion:(/*^block*/id)arg1;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2;

@end
