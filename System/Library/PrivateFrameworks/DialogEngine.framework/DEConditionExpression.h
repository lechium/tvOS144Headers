/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DEConditionEntry.h>

@class NSString;

@interface DEConditionExpression : DEConditionEntry

@property (assign) shared_ptr<siri::dialogengine::ConditionExpression>* This; 
@property (retain) NSString * name; 
@property (retain) NSString * op; 
@property (retain) NSString * value; 
-(NSString *)name;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)validate:(id)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
-(NSString *)op;
-(void)setOp:(NSString *)arg1 ;
@end

