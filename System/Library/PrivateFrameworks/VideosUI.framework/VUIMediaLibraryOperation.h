/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class VUIMediaLibrary, NSError, VUIAsynchronousWorkToken;

@interface VUIMediaLibraryOperation : VUIAsynchronousOperation {

	VUIMediaLibrary* _mediaLibrary;
	NSError* _error;
	VUIAsynchronousWorkToken* _asyncWorkToken;

}

@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                         //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VUIAsynchronousWorkToken * asyncWorkToken;              //@synthesize asyncWorkToken=_asyncWorkToken - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)setAsyncWorkToken:(VUIAsynchronousWorkToken *)arg1 ;
-(VUIAsynchronousWorkToken *)asyncWorkToken;
@end

