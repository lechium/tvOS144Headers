/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol BSServiceListener <NSObject>
@property (nonatomic,copy,readonly) NSString * service; 
@property (nonatomic,copy,readonly) NSString * instance; 
@required
-(NSString *)instance;
-(NSString *)service;
-(void)didReceiveConnection:(id)arg1;

@end

