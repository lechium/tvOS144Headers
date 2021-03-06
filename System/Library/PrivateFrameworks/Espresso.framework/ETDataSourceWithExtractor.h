/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ETDataSource.h>

@protocol ETDataSource;
@class ETImageDescriptorExtractor;

@interface ETDataSourceWithExtractor : NSObject <ETDataSource> {

	id<ETDataSource> _source;
	ETImageDescriptorExtractor* _extractor;

}
-(int)numberOfDataPoints;
-(id)dataPointAtIndex:(int)arg1 ;
-(id)initWithDataSource:(id)arg1 extractor:(id)arg2 ;
@end

