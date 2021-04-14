/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Espresso/Espresso-Structs.h>
@class NSFileHandle, NSMutableArray;

@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject {

	NSFileHandle* _recFileHandle;
	mxnetTools_recordHeader_t_ _recordHeader;
	unsigned long long _currentOffset;
	NSMutableArray* _labelsPrivate;
	mxnetTools_imageHeader_t_ _imageHeader;

}

@property (retain) NSFileHandle * recFileHandle;                         //@synthesize recFileHandle=_recFileHandle - In the implementation block
@property (assign) mxnetTools_recordHeader_t_ recordHeader;              //@synthesize recordHeader=_recordHeader - In the implementation block
@property (assign) mxnetTools_imageHeader_t_ imageHeader;                //@synthesize imageHeader=_imageHeader - In the implementation block
@property (assign) unsigned long long currentOffset;                     //@synthesize currentOffset=_currentOffset - In the implementation block
@property (retain) NSMutableArray * labelsPrivate;                       //@synthesize labelsPrivate=_labelsPrivate - In the implementation block
-(id)imageData;
-(unsigned long long)currentOffset;
-(void)setCurrentOffset:(unsigned long long)arg1 ;
-(id)labels;
-(id)initWithRecFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)seekRecordWithID:(mxnetTools_imageID_t_*)arg1 error:(id*)arg2 ;
-(BOOL)nextRecordAndError:(id*)arg1 ;
-(mxnetTools_imageID_t_)imageID;
-(NSFileHandle *)recFileHandle;
-(void)setRecFileHandle:(NSFileHandle *)arg1 ;
-(mxnetTools_recordHeader_t_)recordHeader;
-(void)setRecordHeader:(mxnetTools_recordHeader_t_)arg1 ;
-(mxnetTools_imageHeader_t_)imageHeader;
-(void)setImageHeader:(mxnetTools_imageHeader_t_)arg1 ;
-(NSMutableArray *)labelsPrivate;
-(void)setLabelsPrivate:(NSMutableArray *)arg1 ;
@end

