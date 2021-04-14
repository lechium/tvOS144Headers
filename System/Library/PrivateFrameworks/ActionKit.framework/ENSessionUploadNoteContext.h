/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EDAMNote, ENNoteRef, ENNotebook, ENNoteStoreClient;

@interface ENSessionUploadNoteContext : NSObject {

	EDAMNote* _note;
	ENNoteRef* _refToReplace;
	ENNotebook* _notebook;
	long long _policy;
	/*^block*/id _completion;
	/*^block*/id _progress;
	ENNoteStoreClient* _noteStore;
	ENNoteRef* _noteRef;

}

@property (nonatomic,retain) EDAMNote * note;                            //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) ENNoteRef * refToReplace;                   //@synthesize refToReplace=_refToReplace - In the implementation block
@property (nonatomic,retain) ENNotebook * notebook;                      //@synthesize notebook=_notebook - In the implementation block
@property (assign,nonatomic) long long policy;                           //@synthesize policy=_policy - In the implementation block
@property (nonatomic,copy) id completion;                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id progress;                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) ENNoteStoreClient * noteStore;              //@synthesize noteStore=_noteStore - In the implementation block
@property (nonatomic,retain) ENNoteRef * noteRef;                        //@synthesize noteRef=_noteRef - In the implementation block
-(id)completion;
-(id)progress;
-(void)setCompletion:(id)arg1 ;
-(long long)policy;
-(void)setProgress:(id)arg1 ;
-(void)setNote:(EDAMNote *)arg1 ;
-(EDAMNote *)note;
-(void)setPolicy:(long long)arg1 ;
-(ENNotebook *)notebook;
-(void)setNotebook:(ENNotebook *)arg1 ;
-(ENNoteRef *)noteRef;
-(void)setNoteRef:(ENNoteRef *)arg1 ;
-(ENNoteStoreClient *)noteStore;
-(void)setRefToReplace:(ENNoteRef *)arg1 ;
-(ENNoteRef *)refToReplace;
-(void)setNoteStore:(ENNoteStoreClient *)arg1 ;
@end

