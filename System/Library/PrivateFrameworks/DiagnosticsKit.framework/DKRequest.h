/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DKRequest <DKRequestExtensionHandler>
@property (assign,nonatomic,__weak) id<DKRequestDelegate> delegate; 
@property (nonatomic,retain) id context; 
@property (assign,nonatomic,__weak) id hostServicesDelegate; 
@required
+(id)requestWithExtensionAttributes:(id)arg1;
-(id<DKRequestDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(id)context;
-(void)setContext:(id)arg1;
-(id)connectWithError:(id*)arg1;
-(void)setHostServicesDelegate:(id)arg1;
-(id)hostServicesDelegate;
-(void)beginWithPayload:(id)arg1;

@end

