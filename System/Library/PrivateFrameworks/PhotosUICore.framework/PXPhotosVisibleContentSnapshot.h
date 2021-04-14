/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXBrowserVisibleContentSnapshot.h>

@class NSDateInterval, NSArray, NSString;

@interface PXPhotosVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot> {

	/*^block*/id _dateIntervalFuture;
	/*^block*/id _locationNamesFuture;
	unsigned long long _dataSourceIdentifier;
	BOOL _isFiltering;
	unsigned long long _dateIntervalGranularity;

}

@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSArray * locationNames; 
@property (nonatomic,readonly) unsigned long long dateIntervalGranularity;              //@synthesize dateIntervalGranularity=_dateIntervalGranularity - In the implementation block
@property (nonatomic,readonly) NSString * localizedPlaceholderText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDateInterval *)dateInterval;
-(NSString *)localizedPlaceholderText;
-(NSArray *)locationNames;
-(unsigned long long)dateIntervalGranularity;
-(id)initWithPhotosLayout:(id)arg1 dateType:(unsigned long long)arg2 dateIntervalGranularity:(unsigned long long)arg3 ;
@end

