/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OSAConcreteReport <NSObject>
@optional
-(BOOL)isActionable;
-(id)additionalIPSMetadata;

@required
-(id)problemType;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2;

@end

