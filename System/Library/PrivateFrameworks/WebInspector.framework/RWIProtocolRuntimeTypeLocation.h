/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeTypeLocation : RWIProtocolJSONObject

@property (assign,nonatomic) int typeInformationDescriptor; 
@property (nonatomic,copy) NSString * sourceID; 
@property (assign,nonatomic) int divot; 
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setTypeInformationDescriptor:(int)arg1 ;
-(void)setDivot:(int)arg1 ;
-(id)initWithTypeInformationDescriptor:(int)arg1 sourceID:(id)arg2 divot:(int)arg3 ;
-(int)typeInformationDescriptor;
-(int)divot;
@end

