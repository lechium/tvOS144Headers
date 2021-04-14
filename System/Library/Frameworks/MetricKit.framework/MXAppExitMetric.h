/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKit/MXMetric.h>

@class MXForegroundExitData, MXBackgroundExitData;

@interface MXAppExitMetric : MXMetric {

	MXForegroundExitData* _foregroundExitData;
	MXBackgroundExitData* _backgroundExitData;

}

@property (readonly) MXForegroundExitData * foregroundExitData;              //@synthesize foregroundExitData=_foregroundExitData - In the implementation block
@property (readonly) MXBackgroundExitData * backgroundExitData;              //@synthesize backgroundExitData=_backgroundExitData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithForegroundExitData:(id)arg1 backgroundExitData:(id)arg2 ;
-(MXForegroundExitData *)foregroundExitData;
-(MXBackgroundExitData *)backgroundExitData;
@end

