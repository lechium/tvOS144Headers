/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLSandboxedURL, NSData, NSString, NSURL, PFVideoComplement;

@interface PLStreamShareSource : NSObject {

	PLSandboxedURL* _sandboxedMediaURL;
	PLSandboxedURL* _sandboxedVideoComplementImageURL;
	PLSandboxedURL* _sandboxedVideoComplementVideoURL;
	NSData* _mediaData;
	NSString* _fileExtension;
	NSURL* _mediaURL;
	PFVideoComplement* _videoComplement;
	long long _mediaType;

}

@property (nonatomic,retain) NSData * mediaData;                               //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSString * fileExtension;                         //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                 //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) PFVideoComplement * videoComplement;              //@synthesize videoComplement=_videoComplement - In the implementation block
@property (assign,nonatomic) long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)serializedDictionary;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(NSString *)fileExtension;
-(void)setFileExtension:(NSString *)arg1 ;
-(NSURL *)mediaURL;
-(void)setMediaURL:(NSURL *)arg1 ;
-(id)photoLibrary;
-(PFVideoComplement *)videoComplement;
-(void)setMediaData:(NSData *)arg1 ;
-(NSData *)mediaData;
-(void)_cleanupIfNeededMediaAtURL:(id)arg1 ;
-(void)cleanupResources;
-(void)setVideoComplement:(PFVideoComplement *)arg1 ;
@end

