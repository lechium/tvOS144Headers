/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NADiffOperation.h>

@protocol NADiffableItemGroup;
@class NSString, NSNumber;

@interface NAGroupDiffOperation : NSObject <NADiffOperation> {

	unsigned long long _type;
	id<NADiffableItemGroup> _group;
	NSNumber* _fromIndex;
	NSNumber* _toIndex;

}

@property (nonatomic,readonly) id<NADiffableItemGroup> group;                     //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fromIndex;                         //@synthesize fromIndex=_fromIndex - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * toIndex;                           //@synthesize toIndex=_toIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * operationDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deleteOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)moveOperationWithGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
+(id)insertOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)type;
-(id<NADiffableItemGroup>)group;
-(NSString *)operationDescription;
-(NSNumber *)toIndex;
-(id)initWithOperationType:(unsigned long long)arg1 group:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 ;
-(NSNumber *)fromIndex;
-(id)_operationDescriptionWithVerboseType:(BOOL)arg1 ;
@end

