/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface DCDocument : NSObject {

	NSURL* _fileURL;
	id _annotation;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) id annotation;                //@synthesize annotation=_annotation - In the implementation block
+(id)documentWithURL:(id)arg1 ;
+(id)documentWithURL:(id)arg1 annotation:(id)arg2 ;
-(NSURL *)fileURL;
-(id)annotation;
-(id)initWithURL:(id)arg1 annotation:(id)arg2 ;
-(void)openWithAppBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

