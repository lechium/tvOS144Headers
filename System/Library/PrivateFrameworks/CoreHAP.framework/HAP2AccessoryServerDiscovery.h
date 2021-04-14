/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HAP2AccessoryServerDiscovery <NSObject>
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerDiscoveryDelegate> delegate; 
@property (getter=isDiscovering,nonatomic,readonly) BOOL discovering; 
@required
-(id<HAP2AccessoryServerDiscoveryDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isDiscovering;
-(void)startDiscovering;
-(void)stopDiscovering;
-(void)reconfirmAccessory:(id)arg1;

@end

