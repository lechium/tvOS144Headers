/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSKeyValueObservationInfo, NSObject, NSKeyValueProperty, NSKeyValueObservance;

@interface NSKeyValueShareableObservationInfoKey : NSObject {

	BOOL _addingNotRemoving;
	NSKeyValueObservationInfo* _baseObservationInfo;
	NSObject* _additionObserver;
	NSKeyValueProperty* _additionProperty;
	unsigned long long _additionOptions;
	void* _additionContext;
	NSObject* _additionOriginalObservable;
	NSKeyValueObservance* _removalObservance;
	unsigned long long _removalObservanceIndex;
	unsigned long long _cachedHash;

}
@end
