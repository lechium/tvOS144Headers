/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
@class _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper;

@interface MAFloatMatrix : NSObject {

	_TtC17KnowledgeGraphKit20MAFloatMatrixWrapper* _wrapper;

}

@property (nonatomic,readonly) _TtC17KnowledgeGraphKit20MAFloatMatrixWrapper * wrapper;              //@synthesize wrapper=_wrapper - In the implementation block
@property (nonatomic,readonly) long long rows; 
@property (nonatomic,readonly) long long columns; 
@property (nonatomic,readonly) long long count; 
+(Class)wrapperClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)count;
-(id)initWithArray:(id)arg1 ;
-(id)data;
-(id)array;
-(long long)columns;
-(long long)rows;
-(float)mean;
-(id)initWithWrapper:(id)arg1 ;
-(float)sum;
-(_TtC17KnowledgeGraphKit20MAFloatMatrixWrapper *)wrapper;
-(float)sumOfSquares;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2 ;
-(id)initWithFloats:(const float*)arg1 rows:(long long)arg2 columns:(long long)arg3 ;
-(float)floatAtRow:(long long)arg1 column:(long long)arg2 ;
-(id)row:(long long)arg1 ;
-(id)matrixBySubtractingMatrix:(id)arg1 ;
-(id)matrixBySubtractingScalar:(float)arg1 ;
-(id)matrixByAddingScalar:(float)arg1 ;
-(id)sumAlongAxis:(unsigned long long)arg1 ;
-(id)meanAlongAxis:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 rows:(long long)arg2 columns:(long long)arg3 ;
-(id)matrixByAppendingRow:(id)arg1 ;
@end

