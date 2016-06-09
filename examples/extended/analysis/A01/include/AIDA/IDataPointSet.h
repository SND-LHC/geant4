//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
// -*- C++ -*-
// AID-GENERATED
// =========================================================================
// This class was generated by AID - Abstract Interface Definition          
// DO NOT MODIFY, but use the org.freehep.aid.Aid utility to regenerate it. 
// =========================================================================
#ifndef AIDA_IDATAPOINTSET_H
#define AIDA_IDATAPOINTSET_H 1

//  This file is part of the AIDA library
//  Copyright (C) 2002 by the AIDA team.  All rights reserved.
//  This library is free software and under the terms of the
//  GNU Library General Public License described in the LGPL.txt 

#include <string>

namespace AIDA {

class IAnnotation;
class IDataPoint;

/**
 * Basic user-level interface class for holding and managing
 * a single set of "data points".
 *
 * @author The AIDA team (http://aida.freehep.org/)
 *
 */

class IDataPointSet {

public: 
    /// Destructor.
    virtual ~IDataPointSet() { /* nop */; }

    /**
     * Get the IAnnotation of the IDataPointSet.
     * @return The IAnnotation.
     *
     */
    virtual IAnnotation & annotation() = 0;

    virtual const IAnnotation & annotation() const = 0;

    /**
     * Get the title of the IDataPointSet.
     * @return The title.
     *
     */
    virtual const std::string & title() const = 0;

    /**
     * Set the title of the IDataPointSet.
     * @param title The new title.
     * @return false If the title cannot be set.
     *
     */
    virtual bool setTitle(const std::string & title) = 0;

    /**
     * Get the dimension of the IDataPoints that can be stored in the set.
     * @return The dimension of the IDataPoints storable in the set.
     *
     */
    virtual int dimension() const = 0;

    /**
     * Remove all the IDataPoints in the set.
     * After this the IDataPointSet is as just created.
     *
     */
    virtual void clear() = 0;

    /**
     * Get the current size of the IDataPointSet, i.e. the number
     * of IDataPoints contained in the set.
     * @return The size of the IDataPointSet.
     *
     */
    virtual int size() const = 0;

    /**
     * Get the IDataPoint at a give index in the set.
     * @param index The IDataPoint index.
     * @return      The corresponding IDataPoint.
     *
     */
    virtual IDataPoint * point(int index) = 0;

    virtual const IDataPoint * point(int index) const = 0;

    /**
     * Add a new empty IDataPoint at the end of the set.
     * @return false If a new IDataPoint cannot be added to the set.
     *
     */
    virtual bool addPoint() = 0;

    /**
     * Add a copy of an IDataPoint at the end of the set.
     * @param point The IDataPoint to be added.
     * @return false If the point has the wrong dimension or
     *                                       if the point cannot be added.
     *
     */
    virtual bool addPoint(const IDataPoint & point) = 0;

    /**
     * Remove the IDataPoint at a given index.
     * @param index The index of the IDataPoint to be removed.
     * @return false If the index is < 0 or >= size().
     *
     */
    virtual bool removePoint(int index) = 0;

    /**
     * Get the lower value for a give axis.
     * @param coord The coordinate of the axis.
     * @return      The lower edge of the corresponding axis.
     *              If coord < 0 or coord >= dimension(), or if the set is empty NaN is returned.
     *
     */
      
           
       
                                           
                                               
                                                             
                                                                                                         
      
       
      
    virtual double lowerExtent(int coord) const = 0;

    /**
     * Get the upper value for a give axis.
     * @param coord The coordinate of the axis.
     * @return      The upper edge of the corresponding axis.
     *              If coord < 0 or coord >= dimension(), or if the set is empty NaN is returned.
     *
     */
      
           
       
                                           
                                               
                                                             
                                                                                                         
      
       
      
    virtual double upperExtent(int coord) const = 0;

    /**
     * Scales the values and the errors of all the measurements
     * of each point by a given factor.
     * @param scaleFactor The scale factor.
     * @return false If an illegal scaleFactor is provided.
     *
     */
    virtual bool scale(double scaleFactor) = 0;

    /**
     * Scales the values of all the measurements
     * of each point by a given factor.
     * @param scaleFactor The scale factor.
     * @return false If an illegal scaleFactor is provided.
     *
     */
    virtual bool scaleValues(double scaleFactor) = 0;

    /**
     * Scales the errors of all the measurements
     * of each point by a given factor.
     * @param scaleFactor The scale factor.
     * @return false If an illegal scaleFactor is provided.
     *
     */
    virtual bool scaleErrors(double scaleFactor) = 0;
}; // class
}; // namespace AIDA
#endif /* ifndef AIDA_IDATAPOINTSET_H */