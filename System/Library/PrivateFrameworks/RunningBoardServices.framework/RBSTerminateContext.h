/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface RBSTerminateContext : NSObject <RBSXPCSecureCoding, NSCopying> {

	unsigned char _maximumTerminationResistance;
	BOOL _preventIfBeingDebugged;
	unsigned _exceptionDomain;
	NSString* _explanation;
	unsigned long long _reportType;
	unsigned long long _exceptionCode;
	NSArray* _attributes;

}

@property (nonatomic,copy) NSArray * attributes;                                      //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL preventIfBeingDebugged;                             //@synthesize preventIfBeingDebugged=_preventIfBeingDebugged - In the implementation block
@property (nonatomic,copy) NSString * explanation;                                    //@synthesize explanation=_explanation - In the implementation block
@property (assign,nonatomic) unsigned long long reportType;                           //@synthesize reportType=_reportType - In the implementation block
@property (assign,nonatomic) unsigned exceptionDomain;                                //@synthesize exceptionDomain=_exceptionDomain - In the implementation block
@property (assign,nonatomic) unsigned long long exceptionCode;                        //@synthesize exceptionCode=_exceptionCode - In the implementation block
@property (assign,nonatomic) unsigned char maximumTerminationResistance;              //@synthesize maximumTerminationResistance=_maximumTerminationResistance - In the implementation block
@property (nonatomic,readonly) BOOL shouldTerminatePlugIns; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultContextWithExplanation:(id)arg1 ;
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setReportType:(unsigned long long)arg1 ;
-(void)setExceptionCode:(unsigned long long)arg1 ;
-(unsigned long long)exceptionCode;
-(unsigned long long)reportType;
-(NSString *)explanation;
-(void)setMaximumTerminationResistance:(unsigned char)arg1 ;
-(id)initWithExplanation:(id)arg1 ;
-(void)setExceptionDomain:(unsigned)arg1 ;
-(unsigned)exceptionDomain;
-(BOOL)shouldTerminatePlugIns;
-(unsigned char)maximumTerminationResistance;
-(BOOL)preventIfBeingDebugged;
-(void)setPreventIfBeingDebugged:(BOOL)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end

