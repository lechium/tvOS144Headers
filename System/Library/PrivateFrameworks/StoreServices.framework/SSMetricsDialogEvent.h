/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSMetricsBaseEvent.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSDictionary, NSArray;

@interface SSMetricsDialogEvent : SSMetricsBaseEvent <SSXPCCoding>

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSString * actionURL; 
@property (nonatomic,copy) NSDictionary * details; 
@property (nonatomic,copy) NSString * dialogId; 
@property (nonatomic,copy) NSString * dialogType; 
@property (nonatomic,copy) NSString * dualAction; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * result; 
@property (nonatomic,copy) NSString * targetId; 
@property (nonatomic,copy) NSArray * userActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)result;
-(NSDictionary *)details;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setResult:(NSString *)arg1 ;
-(void)setDetails:(NSDictionary *)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(void)setTargetId:(NSString *)arg1 ;
-(NSString *)targetId;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)actionURL;
-(NSString *)dialogId;
-(NSString *)dialogType;
-(NSString *)dualAction;
-(NSArray *)userActions;
-(void)setActionURL:(NSString *)arg1 ;
-(void)setDialogId:(NSString *)arg1 ;
-(void)setDialogType:(NSString *)arg1 ;
-(void)setDualAction:(NSString *)arg1 ;
-(void)setUserActions:(NSArray *)arg1 ;
-(id)copyXPCEncoding;
@end
