/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFContextPresenting <WFProviderContext>
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider; 
@property (nonatomic,readonly) BOOL needsDismissal; 
@required
-(void)setProvider:(id)arg1;
-(UIViewController*<WFNetworkView>)provider;
-(BOOL)needsDismissal;

@end
