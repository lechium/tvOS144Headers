/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_nw_browse_result;
@class NSObject;

@interface HAP2AccessoryServerDiscoveryBonjourBrowseResultTuple : NSObject {

	NSObject*<OS_nw_browse_result> _previousResult;
	NSObject*<OS_nw_browse_result> _currentResult;
	unsigned long long _changes;

}

@property (nonatomic,readonly) NSObject*<OS_nw_browse_result> previousResult;              //@synthesize previousResult=_previousResult - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_browse_result> currentResult;               //@synthesize currentResult=_currentResult - In the implementation block
@property (nonatomic,readonly) unsigned long long changes;                                 //@synthesize changes=_changes - In the implementation block
-(unsigned long long)changes;
-(NSObject*<OS_nw_browse_result>)currentResult;
-(id)initWithPreviousResult:(id)arg1 currentResult:(id)arg2 changes:(unsigned long long)arg3 ;
-(NSObject*<OS_nw_browse_result>)previousResult;
@end

