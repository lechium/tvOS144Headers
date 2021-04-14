/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveSupport/_PASSqliteRowIdIndexSetCursor.h>

@class NSArray;

@interface _PASSqliteNSArrayCursor : _PASSqliteRowIdIndexSetCursor {

	id _equalTo;

}

@property (nonatomic,retain) NSArray * collection; 
+(const char*)sqliteMethodName;
+(id)planningInfoForValueConstraint:(int)arg1 ;
-(id)init;
-(void)setCollection:(NSArray *)arg1 ;
-(id)currentIndexedValue;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
@end

