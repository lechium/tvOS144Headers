/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreText/CoreText-Structs.h>
@class NSMutableDictionary;

@interface FontAssetDownloadManager : NSObject {

	TCFRef<const __CFArray *>* fDescriptors;
	TCFRef<const __CFSet *>* fMandatoryAttributes;
	/*^block*/id fProgressCallbackBlock;
	NSMutableDictionary* fProgressParams;
	NSMutableDictionary* fDownloadOptions;
	NSMutableDictionary* fAssetToDescriptors;

}
-(void)dealloc;
@end

