/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXMutableArrayChangeDetails, NSMutableArray, PXSectionedDataSourceChangeDetails;

@interface PXSectionedChangeDetailsCoalescer : NSObject {

	unsigned long long _fromDataSourceIdentifier;
	unsigned long long _currentToDataSourceIdentifier;
	PXMutableArrayChangeDetails* _sectionChangeDetails;
	NSMutableArray* _itemChangeEntries;
	PXSectionedDataSourceChangeDetails* _cachedResult;

}

@property (nonatomic,readonly) PXSectionedDataSourceChangeDetails * coalescedChangeDetails; 
+(BOOL)_verboseLoggingEnabled;
+(id)changeDetailsByCoalescingChangeDetails:(id)arg1 ;
-(id)init;
-(void)addChangeDetails:(id)arg1 ;
-(id)initWithSectionedChangeDetails:(id)arg1 ;
-(PXSectionedDataSourceChangeDetails *)coalescedChangeDetails;
@end
