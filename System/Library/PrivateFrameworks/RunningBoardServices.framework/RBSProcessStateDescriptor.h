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

@class NSSet, NSArray, NSString;

@interface RBSProcessStateDescriptor : NSObject <RBSXPCSecureCoding, NSCopying> {

	NSSet* _endowmentNamespaces;
	unsigned long long _values;

}

@property (assign,nonatomic) unsigned long long values;                //@synthesize values=_values - In the implementation block
@property (nonatomic,copy) NSArray * endowmentNamespaces; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptor;
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(unsigned long long)values;
-(void)setValues:(unsigned long long)arg1 ;
-(void)setEndowmentNamespaces:(NSArray *)arg1 ;
-(NSArray *)endowmentNamespaces;
-(void)filterState:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(id)_endowmentNamespaces;
@end

