/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVLoggingIdentifier;
@class AVWeakReference, AVDispatchOnce, NSArray, NSString;

@interface AVAssetInternal : NSObject {

	AVWeakReference* weakReference;
	AVDispatchOnce* loadChapterInfoOnce;
	NSArray* chapterGroupInfo;
	NSString* anchorChapterType;
	NSArray* availableChapterLanguages;
	NSArray* availableCanonicalizedChapterLanguages;
	NSArray* availableChapterLocales;
	id<AVLoggingIdentifier> loggingIdentifier;

}
@end

