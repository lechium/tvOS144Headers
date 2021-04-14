/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFCancelable.h>

@protocol MFDataConsumer;
@class MFAttachmentManager, MFAttachmentPlaceholder, NSProgress, NSURL, MFMimePart, NSString, MFMailDropMetadata;

@interface MFAttachment : NSObject <MFCancelable> {

	MFAttachmentManager* _attachmentManager;
	BOOL _isDataAvailableLocally;
	MFAttachmentPlaceholder* _placeholder;
	NSProgress* _downloadProgress;
	BOOL _isAutoArchive;
	BOOL _wantsCompletionBlockOffMainThread;
	NSURL* _url;
	MFMimePart* _part;
	NSString* _disposition;
	/*^block*/id _fetchCompletionBlock;
	id<MFDataConsumer> _customConsumer;
	unsigned long long _lastProgressBytes;
	double _lastProgressTime;

}

@property (assign,nonatomic) MFAttachmentManager * attachmentManager;              //@synthesize attachmentManager=_attachmentManager - In the implementation block
@property (readonly) BOOL isContainedInRFC822; 
@property (readonly) BOOL isContainedInCompose; 
@property (copy) NSString * contentID; 
@property (nonatomic,retain) NSProgress * downloadProgress;                        //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) unsigned long long lastProgressBytes;                 //@synthesize lastProgressBytes=_lastProgressBytes - In the implementation block
@property (assign,nonatomic) double lastProgressTime;                              //@synthesize lastProgressTime=_lastProgressTime - In the implementation block
@property (nonatomic,copy) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) MFMimePart * part;                                    //@synthesize part=_part - In the implementation block
@property (nonatomic,copy) NSString * fileName; 
@property (readonly) NSString * path; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * disposition;                                 //@synthesize disposition=_disposition - In the implementation block
@property (nonatomic,copy) NSString * remoteImageFileName; 
@property (assign,nonatomic) unsigned long long decodedFileSize; 
@property (assign,nonatomic) unsigned long long encodedFileSize; 
@property (readonly) BOOL isDataAvailableLocally; 
@property (readonly) BOOL shouldAutoDownload; 
@property (readonly) NSString * inferredMimeType; 
@property (readonly) NSString * fileUTType; 
@property (readonly) BOOL isAutoArchive;                                           //@synthesize isAutoArchive=_isAutoArchive - In the implementation block
@property (assign) BOOL isPlaceholder; 
@property (nonatomic,retain) MFAttachmentPlaceholder * placeholder;                //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) MFMailDropMetadata * mailDropMetadata; 
@property (nonatomic,copy) id fetchCompletionBlock;                                //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (nonatomic,retain) id<MFDataConsumer> customConsumer;                    //@synthesize customConsumer=_customConsumer - In the implementation block
@property (assign,nonatomic) BOOL wantsCompletionBlockOffMainThread;               //@synthesize wantsCompletionBlockOffMainThread=_wantsCompletionBlockOffMainThread - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)dealloc;
-(void)cancel;
-(id)fileURL;
-(NSString *)path;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSString *)disposition;
-(id)fileAttributes;
-(void)setDisposition:(NSString *)arg1 ;
-(MFAttachmentPlaceholder *)placeholder;
-(BOOL)isPlaceholder;
-(void)fetchData;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileName;
-(BOOL)isAvailable;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(void)setPlaceholder:(MFAttachmentPlaceholder *)arg1 ;
-(NSString *)mimeType;
-(id)fetchCompletionBlock;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(BOOL)isCached;
-(NSProgress *)downloadProgress;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)metadataValueForKey:(id)arg1 ;
-(BOOL)conformsToType:(id)arg1 ;
-(id)_dataProvider;
-(double)lastProgressTime;
-(void)setLastProgressTime:(double)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(NSString *)inferredMimeType;
-(BOOL)isImageFile;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(MFMailDropMetadata *)mailDropMetadata;
-(id)fetchPlaceholderData;
-(id)fetchDataSynchronously:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(MFAttachmentManager *)attachmentManager;
-(void)setAttachmentManager:(MFAttachmentManager *)arg1 ;
-(MFMimePart *)part;
-(id)readFromDisk;
-(BOOL)isDataAvailableLocally;
-(id<MFDataConsumer>)customConsumer;
-(id)decodeFilterWithDataConsumer:(id)arg1 ;
-(unsigned long long)encodedFileSize;
-(void)writeToDiskWithData:(id)arg1 ;
-(unsigned long long)lastProgressBytes;
-(void)setLastProgressBytes:(unsigned long long)arg1 ;
-(void)updateProgressWithCurrentBytes:(unsigned long long)arg1 ;
-(BOOL)wantsCompletionBlockOffMainThread;
-(id)initWithURL:(id)arg1 attachmentManager:(id)arg2 ;
-(void)setDecodedFileSize:(unsigned long long)arg1 ;
-(id)fetchLocalData;
-(unsigned long long)decodedFileSize;
-(BOOL)isMailDrop;
-(BOOL)isContainedInRFC822;
-(id)fetchLocalData:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(BOOL)isContainedInCompose;
-(id)filterData:(id)arg1 ;
-(id)fetchDataSynchronously:(id*)arg1 ;
-(void)setMailDropMetadata:(MFMailDropMetadata *)arg1 ;
-(BOOL)contentTypeConformsToEventVCS;
-(id)filterVCSData:(id)arg1 ;
-(id)fileNameByStrippingZipIfNeeded:(BOOL)arg1 ;
-(id)_fileUTTypeForFileName:(id)arg1 ;
-(unsigned long long)sizeOnDisk;
-(id)textEncodingGuessWithData:(id)arg1 ;
-(NSString *)fileUTType;
-(BOOL)contentTypeConformsToEventICS;
-(id)fetchDataToURL:(id*)arg1 ;
-(BOOL)isMailDropPhotoArchive;
-(void)resetProgress;
-(id)filterICSData:(id)arg1 ;
-(BOOL)shouldAutoDownload;
-(NSString *)remoteImageFileName;
-(void)setRemoteImageFileName:(NSString *)arg1 ;
-(id)attachmentContentTypeForFileName:(id)arg1 ;
-(void)setEncodedFileSize:(unsigned long long)arg1 ;
-(BOOL)contentTypeConformsToVCard;
-(BOOL)contentTypeConformsToEvent;
-(BOOL)contentTypeConformsToProvisionment;
-(BOOL)contentTypeConformsToMarkup;
-(BOOL)contentTypeConformsToPassbook;
-(BOOL)contentTypeConformsToIWork;
-(void)setPart:(MFMimePart *)arg1 ;
-(BOOL)isAutoArchive;
-(void)setCustomConsumer:(id<MFDataConsumer>)arg1 ;
-(void)setWantsCompletionBlockOffMainThread:(BOOL)arg1 ;
@end

